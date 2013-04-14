#ifndef SEGMENTINFO_H
#define SEGMENTINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Passerger.h>


/**
 * @brief 国内机票航段信息数据结构，【订单优化】
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SegmentInfo : public TaoDomain
{

public:
 virtual ~SegmentInfo() { }

  QString getAirlineCode() const;
  void setAirlineCode (QString airlineCode);
  QString getArrAirportCode() const;
  void setArrAirportCode (QString arrAirportCode);
  QString getArrCityCode() const;
  void setArrCityCode (QString arrCityCode);
  QString getArrTime() const;
  void setArrTime (QString arrTime);
  qlonglong getBookStatus() const;
  void setBookStatus (qlonglong bookStatus);
  qlonglong getCabinClass() const;
  void setCabinClass (qlonglong cabinClass);
  QString getCabinCode() const;
  void setCabinCode (QString cabinCode);
  qlonglong getCabinId() const;
  void setCabinId (qlonglong cabinId);
  QString getCarrier() const;
  void setCarrier (QString carrier);
  qlonglong getChildFee() const;
  void setChildFee (qlonglong childFee);
  qlonglong getChildPrice() const;
  void setChildPrice (qlonglong childPrice);
  qlonglong getChildTax() const;
  void setChildTax (qlonglong childTax);
  QString getDepAirportCode() const;
  void setDepAirportCode (QString depAirportCode);
  QString getDepCityCode() const;
  void setDepCityCode (QString depCityCode);
  QString getDepTime() const;
  void setDepTime (QString depTime);
  QString getExtra() const;
  void setExtra (QString extra);
  qlonglong getFee() const;
  void setFee (qlonglong fee);
  qlonglong getFlightId() const;
  void setFlightId (qlonglong flightId);
  QString getFlightNo() const;
  void setFlightNo (QString flightNo);
  QString getFlightType() const;
  void setFlightType (QString flightType);
  QString getMemo() const;
  void setMemo (QString memo);
  QList<Passerger> getPassengers() const;
  void setPassengers (QList<Passerger> passengers);
  qlonglong getPolicyId() const;
  void setPolicyId (qlonglong policyId);
  qlonglong getPolicyType() const;
  void setPolicyType (qlonglong policyType);
  qlonglong getPrice() const;
  void setPrice (qlonglong price);
  qlonglong getSegmentType() const;
  void setSegmentType (qlonglong segmentType);
  QString getSpecialRule() const;
  void setSpecialRule (QString specialRule);
  qlonglong getTax() const;
  void setTax (qlonglong tax);
  qlonglong getTicketPrice() const;
  void setTicketPrice (qlonglong ticketPrice);
  
  virtual void parseResponse();

private:
/**
 * @brief 航班航空公司二字码
 **/
  QString airlineCode;

/**
 * @brief 航班到达机场三字码
 **/
  QString arrAirportCode;

/**
 * @brief 航班到达城市三字码
 **/
  QString arrCityCode;

/**
 * @brief 航班到达时间，格式yyyy-mm-dd hh:mm:ss
 **/
  QString arrTime;

/**
 * @brief 出票状态: 0，初始状态；1，hk成功；2，hk失败；3，出票（RR）成功；4，出票（RR）失败；5，取消hk成功 6:取消hk失败
 **/
  qlonglong bookStatus;

/**
 * @brief 舱位等级：0，头等舱(F)；1，商务舱(C)；2，经济舱(Y)
 **/
  qlonglong cabinClass;

/**
 * @brief 航班舱位代码
 **/
  QString cabinCode;

/**
 * @brief 航班舱位id，淘宝系统唯一键
 **/
  qlonglong cabinId;

/**
 * @brief 航班实际承运航班号
 **/
  QString carrier;

/**
 * @brief 航班儿童机建费用，单位：分
 **/
  qlonglong childFee;

/**
 * @brief 儿童销售价格，单位：分
 **/
  qlonglong childPrice;

/**
 * @brief 航班儿童燃油税，单位：分
 **/
  qlonglong childTax;

/**
 * @brief 航班出发机场三字码
 **/
  QString depAirportCode;

/**
 * @brief 航班出发城市三字码
 **/
  QString depCityCode;

/**
 * @brief 航班起飞时间，格式yyyy-mm-dd hh:mm:ss
 **/
  QString depTime;

/**
 * @brief 扩展信息
 **/
  QString extra;

/**
 * @brief 航班成人机建费，单位：分
 **/
  qlonglong fee;

/**
 * @brief 淘宝系统航班id唯一键
 **/
  qlonglong flightId;

/**
 * @brief 航班号
 **/
  QString flightNo;

/**
 * @brief 航班机型
 **/
  QString flightType;

/**
 * @brief 备注信息，政策中的备注信息
 **/
  QString memo;

/**
 * @brief 乘机人信息列表
 **/
  QList<Passerger> passengers;

/**
 * @brief 政策id，淘宝系统政策唯一键
 **/
  qlonglong policyId;

/**
 * @brief 机票政策类型：6，特价；8，让利；10，特殊
 **/
  qlonglong policyType;

/**
 * @brief 销售价格，单位：分
 **/
  qlonglong price;

/**
 * @brief 航段类型：1，去程；2，回程
 **/
  qlonglong segmentType;

/**
 * @brief 特殊说明
 **/
  QString specialRule;

/**
 * @brief 航班成人燃油税，单位：分
 **/
  qlonglong tax;

/**
 * @brief 当前航段票面价格，单位：分
 **/
  qlonglong ticketPrice;

};

#endif  /* SEGMENTINFO_H */
