#ifndef POLICY_H
#define POLICY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>
#include <TaoApiCpp/domain/PolicyDetail.h>


/**
 * @brief 机票产品政策数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Policy : public TaoDomain
{

public:
 virtual ~Policy() { }

  qlonglong getAgentId() const;
  void setAgentId (qlonglong agentId);
  QString getAirline() const;
  void setAirline (QString airline);
  QString getArrAirports() const;
  void setArrAirports (QString arrAirports);
  QString getAttributes() const;
  void setAttributes (QString attributes);
  bool getAutoHkFlag() const;
  void setAutoHkFlag (bool autoHkFlag);
  bool getAutoTicketFlag() const;
  void setAutoTicketFlag (bool autoTicketFlag);
  QString getCabinRules() const;
  void setCabinRules (QString cabinRules);
  QString getDepAirports() const;
  void setDepAirports (QString depAirports);
  qlonglong getFirstSaleAdvanceDay() const;
  void setFirstSaleAdvanceDay (qlonglong firstSaleAdvanceDay);
  qlonglong getFlags() const;
  void setFlags (qlonglong flags);
  QString getFlightInfo() const;
  void setFlightInfo (QString flightInfo);
  qlonglong getId() const;
  void setId (qlonglong id);
  qlonglong getLastSaleAdvanceDay() const;
  void setLastSaleAdvanceDay (qlonglong lastSaleAdvanceDay);
  QString getOutProductId() const;
  void setOutProductId (QString outProductId);
  PolicyDetail getPolicyDetail() const;
  void setPolicyDetail (PolicyDetail policyDetail);
  qlonglong getPolicyType() const;
  void setPolicyType (qlonglong policyType);
  QDateTime getSaleEndDate() const;
  void setSaleEndDate (QDateTime saleEndDate);
  QDateTime getSaleStartDate() const;
  void setSaleStartDate (QDateTime saleStartDate);
  QString getSeatInfo() const;
  void setSeatInfo (QString seatInfo);
  bool getShareSupport() const;
  void setShareSupport (bool shareSupport);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  QDateTime getTravelEndDate() const;
  void setTravelEndDate (QDateTime travelEndDate);
  QDateTime getTravelStartDate() const;
  void setTravelStartDate (QDateTime travelStartDate);
  qlonglong getTripType() const;
  void setTripType (qlonglong tripType);
  
  virtual void parseResponse();

private:
/**
 * @brief 当前政策的代理商id，必需参数
 **/
  qlonglong agentId;

/**
 * @brief 当前政策支持的航空公司二字码，必需参数
 **/
  QString airline;

/**
 * @brief 当前政策支持的到达机场三字码列表，逗号分隔字符串，必需参数
 **/
  QString arrAirports;

/**
 * @brief 扩展字段,json格式：  
"rfc" 对应值: 1.不退不改不签,2.收费退改签（退、改、签中任意一个收费即为收费退改签）,3.免费退改签 ； 
"ipt" 对应值 :1.“打印价格等于销售价”,2.“不提供行程单”,3.“打印价格高于销售价”,4.“打印价格低于销售价”,对于客人来说:提供报销凭证包括(1,3),不提供报销凭证包括(2,4)； 
"fdtod"对应值：起飞时间“0000”为0时0分 
"ldtod"对应值：到达时间“2359”为23时59分
 **/
  QString attributes;

/**
 * @brief 当前政策是否自动HK，默认为非自动HK
 **/
  bool autoHkFlag;

/**
 * @brief 当前政策的是否自动出票，默认为非自动出票
 **/
  bool autoTicketFlag;

/**
 * @brief @1: [{"matcher":{"mode":"ALL","list":["D"]},"priceStrategy":{"mode": 
"TICKET_PRICE","modeBaseValue":500,"retention":500,"rebase":-5}}] 
@2: [{"matcher" 
:{"mode":"ALL","list":["D"]},"priceStrategy":{"mode":"DISCOUNT" 
,"modeBaseValue" 
:null,"retention":300,"rebase":-5}}] 
@3: [{"matcher":{"mode":"ALL","list":["D"]},"priceStrategy":{"mode":"Y_DISCOUNT","modeBaseValue":75,"retention":500,"rebase":-5}}]
 **/
  QString cabinRules;

/**
 * @brief 当前政策支持的出发机场三字码列表，逗号分隔字符串，必需参数
 **/
  QString depAirports;

/**
 * @brief 当前政策销售日期最少提前天数
 **/
  qlonglong firstSaleAdvanceDay;

/**
 * @brief 扩展标记，按位属性标记 , 从右到左数，第1个位表示：不PAT自动HK 第2个位表示：儿童可与成人同价 比如：“儿童可与成人同价”=true ,“不PAT自动HK”=false,则表示成二进制字符串"10",换算成十进制flags=2
 **/
  qlonglong flags;

/**
 * @brief 设置包含/排除的航班号，注意格式： +CA1234,CZ3169表示包含列表， -CA1234,CZ3169表示排除列表默认是全部
 **/
  QString flightInfo;

/**
 * @brief 政策淘宝机票的主键id
 **/
  qlonglong id;

/**
 * @brief 当前政策销售日期最晚 提前天数
 **/
  qlonglong lastSaleAdvanceDay;

/**
 * @brief 当前政策的外部产品id，用于关联代理商自身维护的政策id，必需参数，使用接口调用时唯一标识政策
 **/
  QString outProductId;

/**
 * @brief 当前政策的详细信息，必需
 **/
  PolicyDetail policyDetail;

/**
 * @brief 当前政策的政策类型：6，特价政策；8，让利政策；10，特殊政策，必需参数
 **/
  qlonglong policyType;

/**
 * @brief 当前政策销售有效日期的截止日期(注意，格式如：20120-03-10 10:30:31 等价2012-03-11)必需参数
 **/
  QDateTime saleEndDate;

/**
 * @brief 当前政策销售有效日期的开始日期(注意，格式如：20120-03-10 10:30:31 等价2012-03-11)必需参数
 **/
  QDateTime saleStartDate;

/**
 * @brief 当前特殊政策的库存信息，特殊政策时必需，待补充
 **/
  QString seatInfo;

/**
 * @brief 当前政策是否支持共享航班，默认为不支持共享航班(不支持共享航班时，如果当前航班为非承运航班，则搜索结果也不展现)
 **/
  bool shareSupport;

/**
 * @brief 当前政策的状态: 0，关闭；1，发布；2，删除；3，无效(淘宝机票自动程序处理的中间状态) 
必需参数，注意如果当前为发布状态，发布后即刻可以从前台搜索到，从而可能即刻产生用订单
 **/
  qlonglong status;

/**
 * @brief 当前政策旅行有效日期的结束日期(注意，格式如：20120-03-10 10:30:31 等价2012-03-11)必需参数
 **/
  QDateTime travelEndDate;

/**
 * @brief 当前政策旅行有效日期的开始日期(注意，格式，如：2012-03-10 10:30:31 等价2012-03-10)必需参数
 **/
  QDateTime travelStartDate;

/**
 * @brief 行程类型: 0，单程政策；1，往返政策，必需参数
 **/
  qlonglong tripType;

};

#endif  /* POLICY_H */
