#ifndef INCREMENTCUSTOMERSTOPREQUEST_H
#define INCREMENTCUSTOMERSTOPREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/IncrementCustomerStopResponse.h>

/**
 * TOP API: 供应用关闭其用户的增量消息服务功能，这样可以节省ISV的流量。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementCustomerStopRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 QString getType() const
;  void setType (QString type);


  virtual IncrementCustomerStopResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 应用要关闭增量消息服务的用户昵称
 **/
  QString nick;

/**
 * @brief 应用需要关闭用户的功能。取值可为get,notify和syn分别表示增量api取消息，主动发送消息和同步数据功能。用户关闭相应功能前,需应用已为用户经开通了相应的功能。这三个参数可无序任意组合。在关闭时，type里面的参数会根据应用订阅的类型进行相应的过虑。如应用只订阅主动通知，则默认值过滤后为get,notify，如果应用只订阅数据同步服务，默认值过滤后为syn。
 **/
  QString type;

};

#endif  /* INCREMENTCUSTOMERSTOPREQUEST_H */
