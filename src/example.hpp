/**
 * @file example.hpp
 * @brief Example C++ header file to test Doxygen features.
 * @author MangaD
 * @date 2025-07-12
 * @version 1.0
 *
 * This file demonstrates various Doxygen features in C++ code.
 */

#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include <string>
#include <vector>

/**
 * @defgroup example_group Example Group
 * Example functions and classes for Doxygen testing.
 * @{
 */

/// A simple enumeration for demonstration.
enum class Color {
    Red,    ///< Red color
    Green,  ///< Green color
    Blue    ///< Blue color
};

/**
 * @brief Example class using Doxygen features.
 *
 * This class demonstrates documentation for constructors, methods, members, and more.
 */
class Example {
public:
    /**
     * @brief Default constructor.
     */
    Example();

    /**
     * @brief Construct with a name.
     * @param name The name to assign.
     */
    explicit Example(const std::string& name);

    /**
     * @brief Set the name.
     * @param name The new name.
     * @return True if the name was set.
     * @see getName()
     */
    bool setName(const std::string& name);

    /**
     * @brief Get the name.
     * @return The current name.
     * @see setName()
     */
    std::string getName() const;

    /**
     * @brief Add a value to the list.
     * @param value The value to add.
     * @throws std::invalid_argument if value is negative.
     */
    void addValue(int value);

    /**
     * @brief Get all values.
     * @return Vector of values.
     */
    std::vector<int> getValues() const;

    /**
     * @brief Static utility function.
     * @param x First integer.
     * @param y Second integer.
     * @return The sum of x and y.
     * @note This is a static method.
     */
    static int add(int x, int y);

    /// Public member variable
    Color color;

private:
    std::string name_; ///< The name
    std::vector<int> values_; ///< List of values
};

/** @} */ // end of example_group

#endif // EXAMPLE_HPP
