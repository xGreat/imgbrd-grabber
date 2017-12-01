#ifndef POST_FILTER_H
#define POST_FILTER_H

#include <QString>
#include <QStringList>
#include <QMap>
#include "loader/token.h"


class PostFilter
{
	public:
		static QStringList filter(const QMap<QString, Token> &tokens, const QStringList &filters);
		static QStringList blacklisted(const QMap<QString, Token> &tokens, const QStringList &blacklistedTags, bool invert = true);
		static QString match(const QMap<QString, Token> &tokens, QString filter, bool invert = false);
};

#endif // POST_FILTER_H
