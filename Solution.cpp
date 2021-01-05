class SnapshotArray 
{
public:
    unordered_map<int,unordered_map<int,int>>snapshot_array;
    unordered_map<int,unordered_map<int,int>>modified;
    int snap_id=0;
    SnapshotArray(int length)  { }
    void set(int index, int value) 
    {
        modified[index][snap_id]=1;
        snapshot_array[index][snap_id]=value;
    }
    int snap() {  return snap_id++; }
    int get(int index, int snap_id) 
    {
        if(snap_id==-1) return 0;
        if(modified[index][snap_id]!=1) return get(index,snap_id-1);
        return snapshot_array[index][snap_id];
    }
};
