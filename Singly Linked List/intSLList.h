class IntSLLNode
{
public:
	int info;
	IntSLLNode* next;

	IntSLLNode()
	{
		next = 0;
	}
	IntSLLNode(int el, IntSLLNode* ptr = 0)
	{
		info = el; next = ptr;
	}
	
};

class IntSLList
{
public:
	IntSLList()
	{
		head = tail = 0;
	}

	~IntSLList();
	int isEmpty()
	{
		return head == 0;
	}
	void addToHead(int);
	void addToTail(int);
	int deleteFromHead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;
	void print();
private:
	IntSLLNode* head, * tail;
};
