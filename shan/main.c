void BFS ( LGraph Graph, Vertex S, void (*Visit)(Vertex) )
{
    PtrToAdjVNode p[MaxVertexNum];
    int front=0;
    int rear=0;
    Visit(S);
    Visited[S]=true;
    p[++rear]=Graph->G[S].FirstEdge;
    while(front != rear)
    {
        PtrToAdjVNode t;
        t=p[++front];
        while(t!=NULL)
        {
            if(Visited[t->AdjV]==false)
            {
                Visit(t->AdjV);
                Visited[t->AdjV]=true;
                p[++rear]=t;
            }
            t=t->Next;
        }
    }
}
