// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<string.h>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int num;

    while(cin>>num){
        for(int n=0;n<num;++n){
            cout<<"Case "<<n+1<<":"<<endl;
            string s1,s2;
            string res = "";
            int flag = 0;
            cin>>s1;
            cin>>s2;
            
            string t1 = s1;
            string t2 = s2;
        
            int l1 = s1.length();
            int l2 = s2.length();
            if (l1<l2){
                swap(s1,s2);
                swap(l1,l2);
            }
            for(int i=l2-1;i>=0;--i){
                int s_sum = int(s1[i+l1-l2]-'0')+int(s2[i]-'0')+flag;
                flag = int(s_sum>=10);
                s_sum = s_sum%10;
                res = to_string(s_sum) + res;
            }

            for(int i=l1-l2-1;i>=0;--i){
                int s_sum = int(s1[i]-'0')+flag;
                flag = int(s_sum>=10); 
                s_sum = s_sum%10;
                res = to_string(s_sum) + res;
            }

            if(flag){
                res = '1' + res;
            }
            cout<<t1<<" + "<<t2<<" = "<<res<<endl;
            if(n!=num-1){
                cout<<endl;
            }
        }
    }
    return 0;
}
