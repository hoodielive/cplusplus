#include <iostream>


struct object_counter
{
    static int count;
    static int all_count;

    object_count() { ++count; ++all_count; }
    ~object_count() { --count; }
};


TEST(Scoped_ptr, Construct)
{
    object_counter::all_count = object_counter::count = 0;
}
