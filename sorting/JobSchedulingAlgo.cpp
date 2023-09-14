#include<bits/stdc++.h>
using namespace std;

//round robin implementation <os lab assignment>

// queue implementation
int arr[100];
int f=-1, r=-1;

void enq(int p)
{
    if(f==-1 && r==-1){
        f=0;
        r=0;
        arr[r]=p;
    }
    else arr[++r] =p;
}
int deq(){
    if(f==r){
        int temp=arr[f];
        f=-1;
        r=-1;
        return temp;
        
    }

    else return arr[f++];
}






struct process{

    int pid;
    int at;
    int bt;
    int wt;
    int tat;
    int ct;
    bool arrived;
};




struct process* sortwithat(struct process p[], int n){
    
    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-1; j++){
            if(p[j].at > p[j+1].at ){
                struct process temp= p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }

    }
    return p;

}



void calc(struct process p[], int n, int tq){
    bool comp[n];
    int tempbt[n];

    for(int i=0; i<n; i++){
        comp[i]=0;
        tempbt[i]=p[i].bt;
        cout<<tempbt[i]<<endl;
    }

    p=sortwithat(p,n);

    // for(int i=0; i<n; i++){
        
    //     cout<<p[i].at<<endl;
    // }


    int time=0;
    int count=0;


    while(count<n){
        
        for(int i=0; i<n ;i++){
            if(p[i].at<=time && comp[i]==0 && p[i].arrived==0){
                cout<<"process FOR enq"<<i<<endl;
                enq(p[i].pid);
                p[i].arrived=1;
            }
        }

        // process current= p[];
        int curpid=deq();
        

        if(tempbt[curpid] <= tq && tempbt[curpid]>0 ){

            count++;



            comp[curpid]=1;

            time+=tempbt[curpid];
            tempbt[curpid]=0;

            p[curpid].ct=time;
            p[curpid].wt= p[curpid].ct - (p[curpid].at + p[curpid].bt);
            p[curpid].tat= time-p[curpid].at;

            cout<<"process  completed"<<curpid+1<<"  at  "<<time<<" tq "<<endl;

        }
        else{
            tempbt[curpid]-=tq;
            time += tq;



            for(int i=0; i<n ;i++){
                if(p[i].at<=time && comp[i]==0 && p[i].arrived==0){
                    cout<<"process FOR enq"<<i<<endl;
                    enq(p[i].pid);
                    p[i].arrived=1;
                }
            }







            enq(curpid);
            cout<<"process REWIMD enq"<<curpid<<endl;
        }


    }


}




int main(){
    int tq=2;

    int n=6;

    struct process p[n];

    for(int i=0; i<n; i++){
        p[i].pid=i;
        // p[i].at=i;
        p[i].arrived=0;
    }
    p[0].at=0;    
    p[1].at=1;    
    p[2].at=2;    
    p[3].at=3;    
    p[4].at=4;    
    p[5].at=6;   

    p[0].bt=4;    
    p[1].bt=5;    
    p[2].bt=2;    
    p[3].bt=1;    
    p[4].bt=6;    
    p[5].bt=3;    

    // int tq=4;


    calc(p,n, tq);

    printf("Pid     AT      BT      WT      TAT       CT\n");
    float AWT=0;
    float ATAT=0;


    for(int i=0; i<n; i++){
        printf(" %d ",     p[i].pid+1 );
		printf("	 %d ", p[i].at );
		printf("	 %d",  p[i].bt );
		printf("	 %d",  p[i].wt );
		printf("	 %d",  p[i].tat );
		printf("	 %d\n",p[i].ct );
        AWT+=p[i].wt;
        ATAT+=p[i].tat;

    }
    
    cout<<"Average WT = "<<AWT/n<<endl;
    cout<<"Average TAT = "<<ATAT/n<<endl;

    return 0;
}