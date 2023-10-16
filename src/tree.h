#pragma once

#include <functional>
#include <vector>

template <typename E>
struct Node {
    E e;
    std::vector<Node> children;
};

template <typename E>
struct Tree {
    Node<E> root;
};
