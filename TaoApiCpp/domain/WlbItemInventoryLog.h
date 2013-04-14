#ifndef WLBITEMINVENTORYLOG_H
#define WLBITEMINVENTORYLOG_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 库存变更记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemInventoryLog : public TaoDomain
{

public:
 virtual ~WlbItemInventoryLog() { }

  QString getBatchCode() const;
  void setBatchCode (QString batchCode);
  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getInventType() const;
  void setInventType (QString inventType);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getOpType() const;
  void setOpType (QString opType);
  qlonglong getOpUserId() const;
  void setOpUserId (qlonglong opUserId);
  QString getOrderCode() const;
  void setOrderCode (QString orderCode);
  qlonglong getOrderItemId() const;
  void setOrderItemId (qlonglong orderItemId);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  QString getRemark() const;
  void setRemark (QString remark);
  qlonglong getResultQuantity() const;
  void setResultQuantity (qlonglong resultQuantity);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 批次号
 **/
  QString batchCode;

/**
 * @brief 创建日期
 **/
  QDateTime gmtCreate;

/**
 * @brief 库存变更ID
 **/
  qlonglong id;

/**
 * @brief VENDIBLE  1-可销售; 
FREEZE  201-冻结库存; 
ONWAY  301-在途库存; 
DEFECT  101-残存品; 
ENGINE_DAMAGE 102-机损; 
BOX_DAMAGE 103-箱损
 **/
  QString inventType;

/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 库存操作作类型 
CHU_KU 1-出库 
RU_KU 2-入库 
FREEZE 3-冻结 
THAW 4-解冻 
CHECK_FREEZE 5-冻结确认 
CHANGE_KU 6-库存类型变更
 **/
  QString opType;

/**
 * @brief 库存操作者ID
 **/
  qlonglong opUserId;

/**
 * @brief 订单号
 **/
  QString orderCode;

/**
 * @brief 订单商品ID
 **/
  qlonglong orderItemId;

/**
 * @brief 处理数量变化值
 **/
  qlonglong quantity;

/**
 * @brief 备注
 **/
  QString remark;

/**
 * @brief 结果值
 **/
  qlonglong resultQuantity;

/**
 * @brief 仓库编码
 **/
  QString storeCode;

/**
 * @brief 用户ID
 **/
  qlonglong userId;

};

#endif  /* WLBITEMINVENTORYLOG_H */
