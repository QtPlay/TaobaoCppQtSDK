#ifndef USERTAG_H
#define USERTAG_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 人群标签
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserTag : public TaoDomain
{

public:
 virtual ~UserTag() { }

  QDateTime getCreateDate() const;
  void setCreateDate (QDateTime createDate);
  QString getDescription() const;
  void setDescription (QString description);
  qlonglong getTagId() const;
  void setTagId (qlonglong tagId);
  QString getTagName() const;
  void setTagName (QString tagName);
  
  virtual void parseResponse();

private:
/**
 * @brief 创建时间
 **/
  QDateTime createDate;

/**
 * @brief 标签描述
 **/
  QString description;

/**
 * @brief 标签ID
 **/
  qlonglong tagId;

/**
 * @brief 标签名称
 **/
  QString tagName;

};

#endif  /* USERTAG_H */
