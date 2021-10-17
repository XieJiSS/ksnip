/*
 * Copyright (C) 2018 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef KSNIP_LINUXSNIPPINGAREA_H
#define KSNIP_LINUXSNIPPINGAREA_H

#include "AbstractSnippingArea.h"
#include "src/common/platform/HdpiScaler.h"

class LinuxSnippingArea : public AbstractSnippingArea
{
public:
	explicit LinuxSnippingArea();
	~LinuxSnippingArea() override = default;
    QRect selectedRectArea() const override;

protected:
	void setFullScreen() override;
	QRect getSnippingAreaGeometry() const override;

private:
	QRect mDesktopGeometry;
	HdpiScaler mHdpiScaler;
	void calculateDesktopGeometry();
};

#endif //KSNIP_LINUXSNIPPINGAREA_H
