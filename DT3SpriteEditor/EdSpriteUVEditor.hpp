#ifndef EDSPRITEUVEDITOR
#define EDSPRITEUVEDITOR
//==============================================================================
///	
///	File: EdSpriteUVEditor.hpp
///	
/// Copyright (C) 2000-2013 by Smells Like Donkey, Inc. All rights reserved.
///
/// This file is subject to the terms and conditions defined in
/// file 'LICENSE.txt', which is part of this source code package.
///	
//==============================================================================

#include <QtOpenGL/QGLWidget>
#include "EdSpriteMainWindow.hpp"
#include "MaterialResource.hpp"
#include "CameraObject.hpp"

//==============================================================================
/// Forward declarations
//==============================================================================

//==============================================================================
/// Class
//==============================================================================

class EdSpriteUVEditor : public QGLWidget
{
    Q_OBJECT

	public:
										EdSpriteUVEditor    (EdSpriteMainWindow *main_window, QGLWidget *share = NULL);


	protected:
		void							draw				(QPainter *painter);

		void							initializeGL		(void);
		void							paintGL				(void);
		void							resizeGL			(int w, int h);

		void							mousePressEvent		(QMouseEvent *event);
		void							mouseMoveEvent		(QMouseEvent *event);
		void							mouseReleaseEvent	(QMouseEvent *event);

        void                            keyPressEvent       (QKeyEvent *event);

    public slots:   
        void                            onSpriteChanged     (void);

    private:
        static const float HANDLE_CLICK_SIZE;
        static const float HANDLE_ROTATE_RADIUS;

        enum HandleID {
            HANDLE_NONE = 0,
            HANDLE_PLUS_U,
            HANDLE_MINUS_U,
            HANDLE_PLUS_V,
            HANDLE_MINUS_V
        };
        
        void                            drawCube                (const Vector3 &position);
        void                            drawPart                (const Matrix3 &object_to_viewport_transform, KeyedSpriteAnimationPoseJoint *joint, bool selected);
        void                            updateTransforms        (void);

        Vector2                         getHandleObjectPosition (const KeyedSpriteAnimationPoseJoint *joint, HandleID handle);
        
        HandleID                        getClickedHandle        (const Matrix3 &object_to_viewport_transform, const KeyedSpriteAnimationPoseJoint *joint, int x, int y);
        bool                            isClickedPart           (const Matrix3 &object_to_viewport_transform, const KeyedSpriteAnimationPoseJoint *joint, int x, int y);
        int                             getClickedPart          (const Matrix3 &object_to_viewport_transform, int x, int y);


        EdSpriteMainWindow              *_main_window;

        MaterialResource                _bounds_material;
        MaterialResource                _outline_material;
        MaterialResource                _selected_material;
        MaterialResource                _handle_material;
        
        CameraObject                    _camera;
        DTfloat                         _zoom;
        Vector2                         _translate;

        Matrix3                         _object_to_viewport_transform;
        
        int                             _current_handle;
        KeyedSpriteAnimationPoseJoint   *_current_handle_part;
        int                             _last_mouse_x;
        int                             _last_mouse_y;


};

//==============================================================================
//==============================================================================

#endif
