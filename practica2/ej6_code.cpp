bool rep_ok(DLLlist input){

	// empty list
	if(input.size == 0 &&
	   input.first == NULL && 
	   input.last == NULL) {
		return true;
	}

	if(input.first.previous != NULL) return false; // first node should not have a previous node
	if(input.last.next != NULL) return false; // last node should not have a next node

	Node curr = input.first;
	Node prev = NULL;
	for(int i = 0; i < input.size; i++){
		if(curr == NULL) return false; // ensure that there are at least as many nodes as the size field says

		if(prev != NULL) {
			if(prev != curr.previous) return false; // is pointer to previous node broken?
		}

		prev = curr
		curr = curr.next
	}

	if(curr != input.last) return false; // mismatch between last nodes

	return true;
}

