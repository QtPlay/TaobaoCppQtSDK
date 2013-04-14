#ifndef TRADESNAPSHOTGETREQUEST_H
#define TRADESNAPSHOTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeSnapshotGetResponse.h>

/**
 * TOP API: 交易快照查询 
目前只支持类型为“旺店标准版(600)”或“旺店入门版(610)”的交易  
对于“旺店标准版”类型的交易，返回的snapshot字段为交易快照编号  
对于“旺店入门版”类型的交易，返回的snapshot字段为JSON结构的数据(其中的shopPromotion包含了优惠，积分等信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeSnapshotGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeSnapshotGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的字段列表。现只支持："snapshot"字段
 **/
  QString fields;

/**
 * @brief 交易编号
 **/
  qlonglong tid;

};

#endif  /* TRADESNAPSHOTGETREQUEST_H */
