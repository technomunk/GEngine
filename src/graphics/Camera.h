#pragma once

#include <glm/glm.hpp>

namespace Graphics {

	class Camera {
	public:
		Camera(const glm::vec3 &position, const glm::vec3 &target, float fov);

		void setPosition(const glm::vec3 &);
		void setTarget(const glm::vec3 &);
		void setFOV(float);
		void setAspectRatio(float);

		glm::vec3 getPosition() const;

		glm::mat4 getProjectionViewMatrix();
		glm::mat4 getViewMatrix();

	private:
		bool pvIsCorrect = false;
		bool viewIsCorrect = false;
		int viewportWidth, viewportHeight;
		glm::mat4 viewMatrix, pvMatrix;
		glm::vec3 position, target;
		float fov, aspectRatio;
	};
}