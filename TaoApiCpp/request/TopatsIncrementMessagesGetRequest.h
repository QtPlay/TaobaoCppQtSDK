#ifndef TOPATSINCREMENTMESSAGESGETREQUEST_H
#define TOPATSINCREMENTMESSAGESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsIncrementMessagesGetResponse.h>

/**
 * TOP API: 异步获取增量消息数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsIncrementMessagesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEnd() const
;  void setEnd (QDateTime end);

 QDateTime getStart() const
;  void setStart (QDateTime start);

 QString getTopics() const
;  void setTopics (QString topics);


  virtual TopatsIncrementMessagesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 消息结束时间，格式：yyyy-MM-dd HH:mm:ss，其中start < end < 现在，并且start和end在同一天。
 **/
  QDateTime end;

/**
 * @brief 消息开始时间，格式：yyyy-MM-dd HH:mm:ss，其中start >= 前天零点
 **/
  QDateTime start;

/**
 * @brief 消息类型，多个类型之间用半角逗号分隔，可选值为：item,trade,refund。
 **/
  QString topics;

};

#endif  /* TOPATSINCREMENTMESSAGESGETREQUEST_H */
