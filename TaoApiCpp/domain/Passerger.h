#ifndef PASSERGER_H
#define PASSERGER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 国内机票乘机人信息数据结构【top订单优化】
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Passerger : public TaoDomain
{

public:
 virtual ~Passerger() { }

  QString getBirthday() const;
  void setBirthday (QString birthday);
  QString getCertNo() const;
  void setCertNo (QString certNo);
  qlonglong getCertType() const;
  void setCertType (qlonglong certType);
  QString getEi() const;
  void setEi (QString ei);
  QString getExtra() const;
  void setExtra (QString extra);
  QString getName() const;
  void setName (QString name);
  qlonglong getPassengerType() const;
  void setPassengerType (qlonglong passengerType);
  QString getPnr() const;
  void setPnr (QString pnr);
  QString getTicketNo() const;
  void setTicketNo (QString ticketNo);
  QString getTripCardNo() const;
  void setTripCardNo (QString tripCardNo);
  QString getTuigaiqian() const;
  void setTuigaiqian (QString tuigaiqian);
  
  virtual void parseResponse();

private:
/**
 * @brief 乘机人生日：yyyy-mm-dd
 **/
  QString birthday;

/**
 * @brief 乘机人证件号码
 **/
  QString certNo;

/**
 * @brief 乘机人证件类型：0，身份证；1，护照；2，学生证；3，军人证；4，回乡证；5，台胞证；6，港澳台胞；7，国际海员；8，外国人永久居留证；9，其它证件
 **/
  qlonglong certType;

/**
 * @brief ei项
 **/
  QString ei;

/**
 * @brief 扩展字段
 **/
  QString extra;

/**
 * @brief 乘机人姓名
 **/
  QString name;

/**
 * @brief 乘机人类型：0，成人；1，儿童；2，婴儿
 **/
  qlonglong passengerType;

/**
 * @brief pnr
 **/
  QString pnr;

/**
 * @brief 票号
 **/
  QString ticketNo;

/**
 * @brief 常旅客卡号
 **/
  QString tripCardNo;

/**
 * @brief 退改签
 **/
  QString tuigaiqian;

};

#endif  /* PASSERGER_H */
