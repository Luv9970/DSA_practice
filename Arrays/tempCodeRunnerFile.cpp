  vector<int> arr={5,10,3,2,50,80};
    int product = 150;
    int start = 0;
    int end = arr.size() -1;
    vector<int> ans;
    while(start < end){
        if(arr[start] * arr[end] == product){
            ans.push_back(start);
            ans.push_back(end);
            break;
        }else{
            if(arr[start] * arr[end] > product){
                end--;
            }else{
                start++;
            }
        }
    }