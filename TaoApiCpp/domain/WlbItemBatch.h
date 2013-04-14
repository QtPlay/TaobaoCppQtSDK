#ifndef WLBITEMBATCH_H
#define WLBITEMBATCH_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 批次库存查询结果记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemBatch : public TaoDomain
{

public:
 virtual ~WlbItemBatch() { }

  QString getBatchCode() const;
  void setBatchCode (QString batchCode);
  QString getCreator() const;
  void setCreator (QString creator);
  qlonglong getDefectQuantity() const;
  void setDefectQuantity (qlonglong defectQuantity);
  QDateTime getDueDate() const;
  void setDueDate (QDateTime dueDate);
  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  QDateTime getGmtModified() const;
  void setGmtModified (QDateTime gmtModified);
  QString getGuaranteePeriod() const;
  void setGuaranteePeriod (QString guaranteePeriod);
  qlonglong getGuaranteeUnit() const;
  void setGuaranteeUnit (qlonglong guaranteeUnit);
  qlonglong getId() const;
  void setId (qlonglong id);
  bool getIsDeleted() const;
  void setIsDeleted (bool isDeleted);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getLastModifier() const;
  void setLastModifier (QString lastModifier);
  QString getProduceArea() const;
  void setProduceArea (QString produceArea);
  QString getProduceCode() const;
  void setProduceCode (QString produceCode);
  QDateTime getProduceDate() const;
  void setProduceDate (QDateTime produceDate);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  QDateTime getReceiveDate() const;
  void setReceiveDate (QDateTime receiveDate);
  QString getRemarks() const;
  void setRemarks (QString remarks);
  QString getStatus() const;
  void setStatus (QString status);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  qlonglong getVersion() const;
  void setVersion (qlonglong version);
  
  virtual void parseResponse();

private:
/**
 * @brief 批次编号
 **/
  QString batchCode;

/**
 * @brief 创建者
 **/
  QString creator;

/**
 * @brief 残次数量
 **/
  qlonglong defectQuantity;

/**
 * @brief 到期时间
 **/
  QDateTime dueDate;

/**
 * @brief 创建时间
 **/
  QDateTime gmtCreate;

/**
 * @brief 最后修改时间
 **/
  QDateTime gmtModified;

/**
 * @brief 保质期
 **/
  QString guaranteePeriod;

/**
 * @brief 天（单位）
 **/
  qlonglong guaranteeUnit;

/**
 * @brief 商品批次记录id
 **/
  qlonglong id;

/**
 * @brief 是否删除。0：正常 1：删除
 **/
  bool isDeleted;

/**
 * @brief 商品id
 **/
  qlonglong itemId;

/**
 * @brief 最后修改者
 **/
  QString lastModifier;

/**
 * @brief 产地
 **/
  QString produceArea;

/**
 * @brief 生产编号
 **/
  QString produceCode;

/**
 * @brief 生产日期
 **/
  QDateTime produceDate;

/**
 * @brief 商品数量
 **/
  qlonglong quantity;

/**
 * @brief 接受日期
 **/
  QDateTime receiveDate;

/**
 * @brief 描述
 **/
  QString remarks;

/**
 * @brief 状态。item_batch_status_open:开放 item_batch_status_lock:冻结 item_batch_status_invalid:无效
 **/
  QString status;

/**
 * @brief 存储类型
 **/
  QString storeCode;

/**
 * @brief 用户id
 **/
  qlonglong userId;

/**
 * @brief 版本
 **/
  qlonglong version;

};

#endif  /* WLBITEMBATCH_H */
