#pragma once
// Std libs
#include <string>
#include <sstream>
#include <cstdint>
// Project files
#include "Event.hpp"

namespace Engine::Events
{
    class WindowResizeEvent : public Event
    {
    public:
        WindowResizeEvent(uint32_t width, uint32_t height)
            : mWidth(width)
            , mHeight(height)
        {
        }

        [[nodiscard]] uint32_t GetWidth() const
        {
            return mWidth;
        }
        [[nodiscard]] uint32_t GetHeight() const
        {
            return mHeight;
        }

        [[nodiscard]] std::string ToString() const override
        {
            std::stringstream ss;
            ss << "WindowResizeEvent: " << mWidth << ", " << mHeight;
            return ss.str();
        }

        EVENT_CLASS_TYPE(WindowResize)
        EVENT_CATEGORY_TYPE(EventCategoryWindow)
    private:
        uint32_t mWidth, mHeight;
    };

} // namespace Engine::Events