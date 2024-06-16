    #include "ArrayList.h"

    ArrayList::ArrayList() : data{0} {
        length = 0; // 초기화
    }

    ArrayList::~ArrayList(){}

    bool ArrayList::isEmpty(){
        return length == 0;
    }

    bool ArrayList::isFull(){
        return length == MAX_LIST_SIZE;
    }

    void ArrayList::insert(int pos, int item){
        if(!isFull() && pos >= 0 && pos <= length){ // pos 값 검사 및 배열 검사
            for(int i = length; i > pos; i--) // 제일 뒤에서 부터 한 칸 씩 앞으로 반복
                data[i] = data[i-1]; // 뒤로 한 칸씩 밀기
            data[pos] = item; // pos 번에 item값 대입
            length++; // 리스트 항목의 개수 증가
        }
    }

    int ArrayList::remove(int pos){
        if(!isEmpty() && 0 <= pos && pos < length){ // pos 값 검사 및 배열 검사
            int removeitem = data[pos]; // pos 번에 item값을 removeitem에 저장
            for(int i = pos + 1; i < length; i++) // pos 번 뒤에 있는 것 부터 반복
                data[i-1] = data[i]; // 앞으로 당기기
            length--; // 리스트 항목의 개수 감소
            return removeitem;
        }
        else return 0;
    }   

    bool ArrayList::find(int item){
        for(int i = 0; i < length; i++) // item 값을 가진 것이 있는지 검사
            if(data[i] == item) return true;
        return false;
    }

    int ArrayList::getEntry(int pos){
        return data[pos]; // pos 번 item값 반환
    }

    void ArrayList::replace(int pos, int item){
            data[pos] = item; // pos번에 item 값 대입
    }

    int ArrayList::size(){
        return length;
    }

    void ArrayList::display(){
        if(isEmpty())
            cout << "Stack is EMPTY - No display" << endl;
        else {
            for(int i = 0; i < length; i++)
                cout << data[i] << "  ";
                cout << endl;
        }
    }

    void ArrayList::clear(){
        for(int i = 0; i < length; i++) // 배열 초기화
            data[i] = 0;
        length = 0; // 초기화
    }