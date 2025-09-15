#define GLM_ENABLE_EXPERIMENTAL
#define GLM_SWIZZLE
#include <iostream>
#include <glm/glm.hpp>
#include  <glm/gtx/string_cast.hpp>

int main() {
    //no
    glm::vec3 p(1.f, 4.f, -5.f);
    glm::vec3 v(5.f, 1.f, 4.f);
    glm::vec3 p_moved = p + v;
    std::cout << "1) p moved = " << glm::to_string(p_moved) << "\n";


    glm::vec3 v1(1.f, 0.f, 0.f);
    glm::vec3 v2(0.f, 1.f, 0.f);
    glm::vec3 v_sum = v1 + v2;
    //std::cout << "2) v1 + v2 = " << glm::to_string(v_sum) << "\n";


    glm::vec3 v3(0.f, 1.f, 0.f);
    glm::vec3 v3_double = v3 * 2.f;
    std::cout << "3) v3*2 = " << glm::to_string(v3_double) << "\n";


    glm::vec3 start(8.f, 2.f, 5.f);
    glm::vec3 end(1.f, -1.f, 4.f);
    glm::vec3 se = end - start;
    std::cout << "4) end - start = " << glm::to_string(se) << "\n";


    glm::vec3 v4(1.f, 3.f, 4.f);
    glm::vec3 v4_norm = glm::normalize(v4);
    std::cout << "5) normalize(1,3,4) = " << glm::to_string(v4_norm) << "\n";

 
    glm::vec3 v5(1.f, -1.f, 4.f);
    glm::vec4 v5_4d(v5, 0.0f);
    std::cout << "6) vec4(v,0) = " << glm::to_string(v5_4d) << "\n";
}