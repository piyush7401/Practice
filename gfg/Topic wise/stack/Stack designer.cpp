stack<int>_push(int arr[],int n)
{
   stack<int> s;
   for(int i=0;i<n;i++){
       s.push(arr[i]);
   }
   return s;
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int> stack)
{
    while (!stack.empty()) {
        cout << stack.top()<<" ";
        stack.pop();
    }
}
