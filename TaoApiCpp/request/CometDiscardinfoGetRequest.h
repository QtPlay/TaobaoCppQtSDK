#ifndef COMETDISCARDINFOGETREQUEST_H
#define COMETDISCARDINFOGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CometDiscardinfoGetResponse.h>

/**
 * TOP API: 获取一个appkey的哪些用户丢失了消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CometDiscardinfoGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEnd() const
;  void setEnd (QDateTime end);

 QString getNick() const
;  void setNick (QString nick);

 QDateTime getStart() const
;  void setStart (QDateTime start);

 QString getTypes() const
;  void setTypes (QString types);

 qlonglong getUserId() const
;  void setUserId (qlonglong userId);


  virtual CometDiscardinfoGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 指定截止日志，如果不传则为服务端当前时间
 **/
  QDateTime end;

/**
 * @brief 用户nick
 **/
  QString nick;

/**
 * @brief 指定从那个时间开始找丢弃的消息
 **/
  QDateTime start;

/**
 * @brief 指定多个消息类型
 **/
  QString types;

/**
 * @brief 指定查看那个用户的丢弃消息
 **/
  qlonglong userId;

};

#endif  /* COMETDISCARDINFOGETREQUEST_H */
