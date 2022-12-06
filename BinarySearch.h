#ifndef BINARY_SEARCH_0b0b7a677986a493e79e57b5077242bdf6c1e5060e1ba6f7a9fbf8ff9ab5a6a6
    #define BINARY_SEARCH_0b0b7a677986a493e79e57b5077242bdf6c1e5060e1ba6f7a9fbf8ff9ab5a6a6
    #include <vector>
    template<typename type> int BinarySearch(const std::vector<type> &vec,const type &toFind){
        int cursor,start,end;
        start = 0;
        end = vec.size()-1;
        while(start<end){
            if((end - start) % 2 == 0) cursor = start+(end-start)/2;
            else cursor = start+(end-start+1)/2;
            if(vec[cursor] == toFind) break;
            else if(start+1 == end ){
                if(vec[start] == toFind) {
                    cursor = start;
                    break;
                }
                else if(vec[end] == toFind){
                    cursor = end;
                    break;
                }
            }
            else {
                if(vec[cursor] > toFind) end = cursor;
                else if(vec[cursor] < toFind) start = cursor;
            }
        }
        return cursor;
    }
#endif
