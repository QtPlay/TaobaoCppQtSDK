#ifndef REFUNDMESSAGESGETREQUEST_H
#define REFUNDMESSAGESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RefundMessagesGetResponse.h>

/**
 * TOP API: 单笔退款详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundMessagesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getRefundId() const
;  void setRefundId (qlonglong refundId);


  virtual RefundMessagesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表。可选值：RefundMessage结构体中的所有字段，以半角逗号(,)分隔。
 **/
  QString fields;

/**
 * @brief 页码。取值范围:大于零的整数; 默认值:1
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数。取值范围:大于零的整数; 默认值:40;最大值:100
 **/
  qlonglong pageSize;

/**
 * @brief 退款单号
 **/
  qlonglong refundId;

};

#endif  /* REFUNDMESSAGESGETREQUEST_H */
