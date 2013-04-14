#ifndef WLBNOTIFYMESSAGECONFIRMREQUEST_H
#define WLBNOTIFYMESSAGECONFIRMREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbNotifyMessageConfirmResponse.h>

/**
 * TOP API: 确认物流宝可执行消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbNotifyMessageConfirmRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getMessageId() const
;  void setMessageId (qlonglong messageId);


  virtual WlbNotifyMessageConfirmResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流宝通知消息的id，通过taobao.wlb.notify.message.page.get接口得到的WlbMessage数据结构中的id字段
 **/
  qlonglong messageId;

};

#endif  /* WLBNOTIFYMESSAGECONFIRMREQUEST_H */
