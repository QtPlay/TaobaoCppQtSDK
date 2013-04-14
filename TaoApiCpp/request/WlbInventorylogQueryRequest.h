#ifndef WLBINVENTORYLOGQUERYREQUEST_H
#define WLBINVENTORYLOGQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbInventorylogQueryResponse.h>

/**
 * TOP API: 通过商品ID等几个条件来分页查询库存变更记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbInventorylogQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getGmtEnd() const
;  void setGmtEnd (QDateTime gmtEnd);

 QDateTime getGmtStart() const
;  void setGmtStart (QDateTime gmtStart);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getOpType() const
;  void setOpType (QString opType);

 qlonglong getOpUserId() const
;  void setOpUserId (qlonglong opUserId);

 QString getOrderCode() const
;  void setOrderCode (QString orderCode);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual WlbInventorylogQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 结束修改时间,小于等于该时间
 **/
  QDateTime gmtEnd;

/**
 * @brief 起始修改时间,大于等于该时间
 **/
  QDateTime gmtStart;

/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 库存操作作类型(可以为空) 
CHU_KU 1-出库 
RU_KU 2-入库 
FREEZE 3-冻结 
THAW 4-解冻 
CHECK_FREEZE 5-冻结确认 
CHANGE_KU 6-库存类型变更 
若值不在范围内，则按CHU_KU处理
 **/
  QString opType;

/**
 * @brief 可指定授权的用户来查询
 **/
  qlonglong opUserId;

/**
 * @brief 单号
 **/
  QString orderCode;

/**
 * @brief 当前页
 **/
  qlonglong pageNo;

/**
 * @brief 分页记录个数
 **/
  qlonglong pageSize;

/**
 * @brief 仓库编码
 **/
  QString storeCode;

};

#endif  /* WLBINVENTORYLOGQUERYREQUEST_H */
