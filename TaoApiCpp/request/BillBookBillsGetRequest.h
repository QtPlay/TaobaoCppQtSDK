#ifndef BILLBOOKBILLSGETREQUEST_H
#define BILLBOOKBILLSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/BillBookBillsGetResponse.h>

/**
 * TOP API: 查询虚拟账户明细数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillBookBillsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAccountId() const
;  void setAccountId (qlonglong accountId);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getJournalTypes() const
;  void setJournalTypes (qlonglong journalTypes);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartTime() const
;  void setStartTime (QDateTime startTime);


  virtual BillBookBillsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 虚拟账户科目编号
 **/
  qlonglong accountId;

/**
 * @brief 记账结束时间,end_time与start_time相差不能超过30天
 **/
  QDateTime endTime;

/**
 * @brief 需要返回的字段:bid,account_id,journal_type,amount,book_time,description,gmt_create,gmt_modified ,如果不是以上字段将自动忽略
 **/
  QString fields;

/**
 * @brief 明细流水类型:流水类型:101、可用金充值；102、可用金扣除；103、冻结；104、解冻；105、冻结金充值；106、冻结金扣除
 **/
  qlonglong journalTypes;

/**
 * @brief 页码,传入值为1代表第一页,传入值为2代表第二页,依此类推.默认返回的数据是从第一页开始
 **/
  qlonglong pageNo;

/**
 * @brief 每页大小,建议40~100,不能超过100
 **/
  qlonglong pageSize;

/**
 * @brief 记账开始时间
 **/
  QDateTime startTime;

};

#endif  /* BILLBOOKBILLSGETREQUEST_H */
