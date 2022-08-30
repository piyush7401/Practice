void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size() == n){
	    return true;
	}
	else{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.empty()){
	    return true;
	}
	else{
	    return false;
	}
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.empty()){
	    return -1;
	}
	else{
	    int a = s.top();
	    s.pop();
	    return a;
	}
}

int getMin(stack<int>& s){
	// Your code goes here
	int a = 1e4+1;
	while(!s.empty()){
	    if(s.top() < a){
	        a = s.top();
	    }
	    s.pop();
	}
	return a;
}
