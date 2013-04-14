#ifndef WLBNOTIFYMESSAGECONFIRMRESPONSE_H
#define WLBNOTIFYMESSAGECONFIRMRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 确认物流宝可执行消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbNotifyMessageConfirmResponse : public TaoResponse
{
public:
 virtual ~WlbNotifyMessageConfirmResponse() { }

  QDateTime getGmtModified() const;
  void setGmtModified (QDateTime gmtModified);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流宝消息确认时间
 **/
  QDateTime gmtModified;

};

#endif
