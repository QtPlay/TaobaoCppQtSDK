#ifndef REFUNDREMINDTIMEOUT_H
#define REFUNDREMINDTIMEOUT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 退款超时结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundRemindTimeout : public TaoDomain
{

public:
 virtual ~RefundRemindTimeout() { }

  bool getExistTimeout() const;
  void setExistTimeout (bool existTimeout);
  qlonglong getRemindType() const;
  void setRemindType (qlonglong remindType);
  QDateTime getTimeout() const;
  void setTimeout (QDateTime timeout);
  
  virtual void parseResponse();

private:
/**
 * @brief 是否存在超时。可选值:true(是),false(否)
 **/
  bool existTimeout;

/**
 * @brief 提醒的类型（退款详情中提示信息的类型）
 **/
  qlonglong remindType;

/**
 * @brief 超时时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime timeout;

};

#endif  /* REFUNDREMINDTIMEOUT_H */
