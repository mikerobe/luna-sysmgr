/* @@@LICENSE
*
*      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */




#ifndef RETICLEITEM_H
#define RETICLEITEM_H

#include "Common.h"

#include <QGraphicsObject>
#include <QPointer>

class QAnimationGroup;
class QPixmap;

class ReticleItem : public QGraphicsObject
{
	Q_OBJECT

public:

	ReticleItem();
	virtual ~ReticleItem();

	void startAt(const QPoint& pos);

private Q_SLOTS:

	void animationFinished();

private:

	virtual QRectF boundingRect () const;
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*);

private:
	QPointer<QAnimationGroup> m_animation;
	int m_width;
	int m_height;
	QPixmap m_pixmap;
};

#endif /* RETICLEITEM_H */
