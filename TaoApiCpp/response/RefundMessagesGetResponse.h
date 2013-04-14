#ifndef REFUNDMESSAGESGETRESPONSE_H
#define REFUNDMESSAGESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/RefundMessage.h>


/**
 * @brief TOP RESPONSE API: 单笔退款详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundMessagesGetResponse : public TaoResponse
{
public:
 virtual ~RefundMessagesGetResponse() { }

  QList<RefundMessage> getRefundMessages() const;
  void setRefundMessages (QList<RefundMessage> refundMessages);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 搜索到的留言凭证信息列表
 **/
  QList<RefundMessage> refundMessages;

/**
 * @brief 搜索到的留言凭证总数
 **/
  qlonglong totalResults;

};

#endif
