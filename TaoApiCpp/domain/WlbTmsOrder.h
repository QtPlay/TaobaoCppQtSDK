#ifndef WLBTMSORDER_H
#define WLBTMSORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流订单运单信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbTmsOrder : public TaoDomain
{

public:
 virtual ~WlbTmsOrder() { }

  QString getCode() const;
  void setCode (QString code);
  QString getCompanyCode() const;
  void setCompanyCode (QString companyCode);
  QString getOrderCode() const;
  void setOrderCode (QString orderCode);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 运单号
 **/
  QString code;

/**
 * @brief 物流公司编码
 **/
  QString companyCode;

/**
 * @brief 物流订单编号
 **/
  QString orderCode;

/**
 * @brief 物流订单的所有者ID,货主
 **/
  qlonglong userId;

};

#endif  /* WLBTMSORDER_H */
