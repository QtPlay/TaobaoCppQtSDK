#ifndef FENXIAOITEMRECORD_H
#define FENXIAOITEMRECORD_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 分销商品下载记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoItemRecord : public TaoDomain
{

public:
 virtual ~FenxiaoItemRecord() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getDistributorId() const;
  void setDistributorId (qlonglong distributorId);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getProductId() const;
  void setProductId (qlonglong productId);
  QString getTradeType() const;
  void setTradeType (QString tradeType);
  
  virtual void parseResponse();

private:
/**
 * @brief 下载时间
 **/
  QDateTime created;

/**
 * @brief 分销商ID
 **/
  qlonglong distributorId;

/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 更新时间（系统时间，无业务意义）
 **/
  QDateTime modified;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief 分销方式：AGENT（只做代销，默认值）、DEALER（只做经销）
 **/
  QString tradeType;

};

#endif  /* FENXIAOITEMRECORD_H */
