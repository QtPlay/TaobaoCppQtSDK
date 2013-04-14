#ifndef APPCUSTOMER_H
#define APPCUSTOMER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Subscription.h>


/**
 * @brief 开通增量消息服务的应用用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AppCustomer : public TaoDomain
{

public:
 virtual ~AppCustomer() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getNick() const;
  void setNick (QString nick);
  QString getStatus() const;
  void setStatus (QString status);
  QList<Subscription> getSubscriptions() const;
  void setSubscriptions (QList<Subscription> subscriptions);
  QList<QString> getType() const;
  void setType (QList<QString> type);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief isv为用户开通增量消息服务的时间
 **/
  QDateTime created;

/**
 * @brief 最后修改时间，开通、用户的session生效或失效都会更改这个时间。
 **/
  QDateTime modified;

/**
 * @brief 开通用户的淘宝昵称
 **/
  QString nick;

/**
 * @brief 应用用户开通增量消息服务的状态：有两个返回值valid_session和invalid_session。valid_session表示已开通且seesion有效；invalid_session已开通但session失效，此时，无法接收该用户的消息。
 **/
  QString status;

/**
 * @brief 应用为用户开通的消息类型。只有用户开通的消息在应用所订阅的消息类别集合内时，应用才能收到相应的消息。例如：应用订阅添加商品，用户开通了添加商品和删除商品，此时应用只能收到添加商品的消息，收不到删除商品的消息。
 **/
  QList<Subscription> subscriptions;

/**
 * @brief 用户使用的功能。get表示增量api取消息功能；notify表示主动通知功能；syn表示同步数据到ISV数据库功能。
 **/
  QList<QString> type;

/**
 * @brief 用户编号
 **/
  qlonglong userId;

};

#endif  /* APPCUSTOMER_H */
