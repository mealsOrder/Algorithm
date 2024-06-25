import java.io.*;
import java.util.*;

public class Main {
    static int V,E,K;
    static ArrayList<Edge>[] list;
    static int[] dist;

    static class Edge{
        int to,weight;
        public Edge(int to,int weight){
            this.to=to;
            this.weight=weight;
        }
    }
    static class Node implements Comparable<Node>{
        int vertex,distance;

        public Node(int vertex,int distance){
            this.vertex=vertex;
            this.distance=distance;
        }

        @Override
        public int compareTo(Node o) {
            return this.distance-o.distance;
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        V = Integer.parseInt(st.nextToken());
        E = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(br.readLine());

        list = new ArrayList[V+1];
        for(int i=1;i<=V;i++){
            list[i] = new ArrayList<>();
        }

        for(int i=0;i<E;i++){
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            list[a].add(new Edge(b,c));
        }

        dist = new int[V+1];
        Arrays.fill(dist,Integer.MAX_VALUE);
        dist[K]=0;

        PriorityQueue<Node>pq = new PriorityQueue<>();
        pq.offer(new Node(K,0));
        while(!pq.isEmpty()) {
            Node cur = pq.poll();
            int curV = cur.vertex;
            int curD = cur.distance;

            if (curD > dist[curV]) continue;

            for (Edge edge : list[curV]) {
                int nextV = edge.to;
                int nextD = curD + edge.weight;

                if (nextD < dist[nextV]) {
                    dist[nextV] = nextD;
                    pq.offer(new Node(nextV, nextD));
                }
            }
        }

        for(int i=1;i<=V;i++){
            if(dist[i] == Integer.MAX_VALUE) bw.write("INF\n");
            else bw.write(String.valueOf(dist[i]+"\n"));
        }
        bw.flush();
        bw.close();
        br.close();
    }

}
