class Solution {
public:
    string intToRoman(int num) {
        int n1 = num/1000;
        int n2 = (num%1000)/100;
        int n3 = ((num%1000)%100)/10;
        int n4 = ((num%1000)%100)%10;
        string str="";
        while(n1){
            str += 'M';
            n1--;
        }


        while(n2){
            if(n2==9){
                str+="CM"; n2=0;
            }
            else if(n2>=5){
                str+='D';
                n2-=5;
            } 
            else if(n2==4){
                str+="CD";
                n2=0;
            }
            else{
                str+='C'; n2--;
            }
        }

        while(n3){
           if(n3==9){
                str+="XC"; n3=0;
            }
            else if(n3>=5){
                str+='L';
                n3-=5;
            } 
            else if(n3==4){
                str+="XL";
                n3=0;
            }
            else{
                str+='X'; n3--;
            }  
        }

        while(n4){
             if(n4==9){
                str+="IX"; n4=0;
            }
            else if(n4>=5){
                str+='V';
                n4-=5;
            } 
            else if(n4==4){
                str+="IV";
                n4=0;
            }
            else{
                str+='I'; n4--;
            }  
        }
        return str;
    }
};