#ifndef EXPRFUNCTIONS_HPP_
#define EXPRFUNCTIONS_HPP_

#include <stdlib.h>
#include <string>
#include <map>
#include <set>

/**     XXX Warning!! Put self-defined struct in ExprUtil.hpp **
 *  No user defined struct, helper functions (that will not be directly called
 *  in the GQuery scripts) etc. are allowed in this file. This file only
 *  contains user-defined expression function's signature and body.
 *  Please put user defined structs, helper functions etc. in ExprUtil.hpp
 */
#include "ExprUtil.hpp"

namespace UDIMPL {
    typedef std::string string; //XXX DON'T REMOVE

    /****** BIULT-IN FUNCTIONS **************/
    /****** XXX DON'T REMOVE ****************/
    inline int64_t str_to_int(string str) {
        return atoll(str.c_str());
    }

    inline int64_t float_to_int(float val) {
        return (int64_t) val;
    }

    inline bool check(double number) {
        return number > 5;
    }
//
//    inline int test_array_v1(ListAccum<int> graph_arr) {
//        int x[graph_arr.size()];
//        int y;
//        y = graph_arr.get(2);
//        for (int i = 0; i < 5; i++) {
//            x[i] = graph_arr.get(i);
//            if (graph_arr.get(i) < 12) {
//                x[i] += graph_arr.get(i);
//            }
//        }
//        return y;
//    }
//
//    inline int test_array_v2(ListAccum<int> graph_arr) {
//        int x[graph_arr.size()];
//        for (int i = 0; i < 5; i++) {
//            x[i] = graph_arr.get(i);
//            if (graph_arr.get(i) < 12) {
//                x[i] += graph_arr.get(i);
//            }
//        }
//        return *x;
//    }
//
//    inline int test_array_v3(ListAccum<int> graph_arr) {
//        int x[graph_arr.size()];
//        int i = 0;
//        do {
//            Ï
//            if (graph_arr.get(i) > 12) {
//                x[i] = graph_arr.get(i);
//            }
//            i++;
//        } while (i < 5);
//        return *x;
//    }


    inline string max_clique_dyn(ListAccum <ListAccum<int>> graph) {
        bool **conn;
        int size;
        int *qmax;
        int qsize;

        read_graph(graph, conn, size);
        Maxclique md(conn, size,
                     0.025);
        md.mcqdyn(qmax, qsize);  // run max clique with improved coloring and dynamic sorting of vertices
        string output = "";
        for (int i = 0 ; i <qsize; i++){
            output.append(std::to_string(qmax[i]));
            output.append(" ");
        }
        delete[] qmax;
        for (int i = 0; i < size; i++)
            delete[] conn[i];
        delete[] conn;
    return output;
    }
/****************************************/

#endif /* EXPRFUNCTIONS_HPP_ */
}
