#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

template <class ItemType>
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int GetLength();
    void MakeEmpty();
    ItemType GetItem(ItemType, bool&);
    void PutItem(ItemType);
    bool DeleteItem(ItemType);
    void ResetList();
    ItemType GetNextItem();
    void PrintInfo();

private:
    int length = 0;
    NodeType* listData;
    NodeType* currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
