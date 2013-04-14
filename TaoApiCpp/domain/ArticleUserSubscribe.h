#ifndef ARTICLEUSERSUBSCRIBE_H
#define ARTICLEUSERSUBSCRIBE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 用户订购信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ArticleUserSubscribe : public TaoDomain
{

public:
 virtual ~ArticleUserSubscribe() { }

  QDateTime getDeadline() const;
  void setDeadline (QDateTime deadline);
  QString getItemCode() const;
  void setItemCode (QString itemCode);
  
  virtual void parseResponse();

private:
/**
 * @brief 订购关系到期时间
 **/
  QDateTime deadline;

/**
 * @brief 收费项目代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得收费项目代码
 **/
  QString itemCode;

};

#endif  /* ARTICLEUSERSUBSCRIBE_H */
