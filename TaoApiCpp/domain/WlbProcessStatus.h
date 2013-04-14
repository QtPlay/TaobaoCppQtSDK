#ifndef WLBPROCESSSTATUS_H
#define WLBPROCESSSTATUS_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 物流宝订单流转信息对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbProcessStatus : public TaoDomain
{

public:
 virtual ~WlbProcessStatus() { }

  QString getContent() const;
  void setContent (QString content);
  QDateTime getOperateTime() const;
  void setOperateTime (QDateTime operateTime);
  QString getOperater() const;
  void setOperater (QString operater);
  QString getOrderCode() const;
  void setOrderCode (QString orderCode);
  QString getRemark() const;
  void setRemark (QString remark);
  QString getStatusCode() const;
  void setStatusCode (QString statusCode);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  QString getStoreTpCode() const;
  void setStoreTpCode (QString storeTpCode);
  QString getTmsOrderCode() const;
  void setTmsOrderCode (QString tmsOrderCode);
  QString getTmsTpCode() const;
  void setTmsTpCode (QString tmsTpCode);
  
  virtual void parseResponse();

private:
/**
 * @brief 状态内容
 **/
  QString content;

/**
 * @brief 操作时间
 **/
  QDateTime operateTime;

/**
 * @brief 操作人
 **/
  QString operater;

/**
 * @brief 物流宝订单编码
 **/
  QString orderCode;

/**
 * @brief 备注
 **/
  QString remark;

/**
 * @brief 订单操作状态：WMS_ACCEPT;WMS_PRINT;WMS_PICK;WMS_CHECK;WMS_PACKAGE;WMS_CONSIGN;WMS_CANCEL;WMS_UNKNOWN;WMS_CONFIRMED 
TMS_ACCEPT;TMS_STATION_IN;TMS_STATION_OUT;TMS_SIGN;TMS_REJECT;TMS_CANCEL;TMS_UNKNOW;SYS_UNKNOWN
 **/
  QString statusCode;

/**
 * @brief 仓库编码
 **/
  QString storeCode;

/**
 * @brief 仓库合作公司编码
 **/
  QString storeTpCode;

/**
 * @brief tms合作公司订单编码
 **/
  QString tmsOrderCode;

/**
 * @brief tms合作公司编码
 **/
  QString tmsTpCode;

};

#endif  /* WLBPROCESSSTATUS_H */
