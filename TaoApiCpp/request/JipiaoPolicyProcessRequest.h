#ifndef JIPIAOPOLICYPROCESSREQUEST_H
#define JIPIAOPOLICYPROCESSREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/JipiaoPolicyProcessResponse.h>

/**
 * TOP API: 添加/修改一条机票政策
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class JipiaoPolicyProcessRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAirline() const
;  void setAirline (QString airline);

 QString getArrAirports() const
;  void setArrAirports (QString arrAirports);

 QString getAttributes() const
;  void setAttributes (QString attributes);

 bool getAutoHkFlag() const
;  void setAutoHkFlag (bool autoHkFlag);

 bool getAutoTicketFlag() const
;  void setAutoTicketFlag (bool autoTicketFlag);

 QString getCabinRules() const
;  void setCabinRules (QString cabinRules);

 QString getChangeRule() const
;  void setChangeRule (QString changeRule);

 QString getDayOfWeeks() const
;  void setDayOfWeeks (QString dayOfWeeks);

 QString getDepAirports() const
;  void setDepAirports (QString depAirports);

 QString getEi() const
;  void setEi (QString ei);

 QString getExcludeDate() const
;  void setExcludeDate (QString excludeDate);

 qlonglong getFirstSaleAdvanceDay() const
;  void setFirstSaleAdvanceDay (qlonglong firstSaleAdvanceDay);

 qlonglong getFlags() const
;  void setFlags (qlonglong flags);

 QString getFlightInfo() const
;  void setFlightInfo (QString flightInfo);

 qlonglong getLastSaleAdvanceDay() const
;  void setLastSaleAdvanceDay (qlonglong lastSaleAdvanceDay);

 QString getMemo() const
;  void setMemo (QString memo);

 QString getOfficeId() const
;  void setOfficeId (QString officeId);

 QString getOutProductId() const
;  void setOutProductId (QString outProductId);

 QString getPolicyId() const
;  void setPolicyId (QString policyId);

 qlonglong getPolicyType() const
;  void setPolicyType (qlonglong policyType);

 QString getRefundRule() const
;  void setRefundRule (QString refundRule);

 QString getReissueRule() const
;  void setReissueRule (QString reissueRule);

 QDateTime getSaleEndDate() const
;  void setSaleEndDate (QDateTime saleEndDate);

 QDateTime getSaleStartDate() const
;  void setSaleStartDate (QDateTime saleStartDate);

 QString getSeatInfo() const
;  void setSeatInfo (QString seatInfo);

 bool getShareSupport() const
;  void setShareSupport (bool shareSupport);

 QString getSpecialRule() const
;  void setSpecialRule (QString specialRule);

 QDateTime getTravelEndDate() const
;  void setTravelEndDate (QDateTime travelEndDate);

 QDateTime getTravelStartDate() const
;  void setTravelStartDate (QDateTime travelStartDate);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual JipiaoPolicyProcessResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 政策所支持的航空公司二字码
 **/
  QString airline;

/**
 * @brief 政策支持的到达机场列表，逗号分隔的机场三字码， 
注：  
1.让利(8)政策，当到达支持多个(最多25)时，出发只能支持一个；  
2.特价(6)/特殊(10)政策，出发/到达城市只支持一个
 **/
  QString arrAirports;

/**
 * @brief 扩展字段： 
    "rfc" 对应值 1:不退不改不签,2:收费退改签（退、改、签中任意一个收费即为收费退改签）3:免费退改签 
    "ipt" 对应值 1:“打印价格等于销售价”,2:“不提供行程单”,3:“打印价格高于销售价”,4:“打印价格低于销售价”,例如：rfc=1;ipt=1 
    "fdtod"对应值起飞时间“0000”为0时0分  
    "ldtod"对应值：到达时间“2359”为23时59分
 **/
  QString attributes;

/**
 * @brief 政策是否支持自动HK，默认为不支持
 **/
  bool autoHkFlag;

/**
 * @brief 政策是否支持自动出票，默认不支持， 
注：自动出票时，必须同时自动HK
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

规则说明： cabin_rules分二个字段：matcher:适应舱位（又包含两个字段：mode：匹配模式枚举(填INCLUDE），list：适应舱位列表），priceStrategy:价格策略（mode:价格模式（让利产品：DISCOUNT，特价特殊产品有四种模式：票面价用TICKET_PRICE，Y舱折扣用Y_DISCOUNT，C舱折扣用C_DISCOUNT，F舱折扣用F_DISCOUNT）；modeBaseValue:当价格模式mode为DISCOUNT，modeBaseValue不填；当价格模式mode为TICKET_PRICE，modeBaseValue填票面价；当价格模式mode为Y_DISCOUNT/C_DISCOUNT/F_DISCOUNT，modeBaseValue填对应的折扣；retention为返点的百分比；rebase为留钱）
注意：特殊政策不需要舱位时需要传入22；retention、rebase传入小数时，会取整数部分
 **/
  QString cabinRules;

/**
 * @brief 改签规则
 **/
  QString changeRule;

/**
 * @brief 政策适用的星期几，1-7分别表示周一到周日 
注：特殊政策不能填写该字段；其它政策填写时， 
包含全部时需要设置为1234567
 **/
  QString dayOfWeeks;

/**
 * @brief 政策支持的出发机场列表，逗号分隔的机场三字码， 
注： 
1.让利(8)政策，当出发支持多个(最多25)时，到达只能支持一个； 
2.特价(6)/特殊(10)政策，出发/到达城市只支持一个
 **/
  QString depAirports;

/**
 * @brief ei项，自动HK，自动出票设定时必需
 **/
  QString ei;

/**
 * @brief 政策旅行有效日期中排除指定日期，设定日期将不在搜索结果页面展现 
注：最多排除20天，特殊政策无此设置
 **/
  QString excludeDate;

/**
 * @brief 政策销售日期最早提前天数，默认-1表示无效
 **/
  qlonglong firstSaleAdvanceDay;

/**
 * @brief flags是二进制标志 
从右到左数，第1个位表示：不PAT自动HK  
第2个位表示：儿童可与成人同价 
比如：“儿童可与成人同价”=true ,“不PAT自动HK”=false,则表示成二进制字符串"10",换算成十进制flags=2
 **/
  qlonglong flags;

/**
 * @brief 包含/排除的航班号，注意格式： 
+CA1234,CZ3166，表示包含列表 
-CA1234,CZ3166，表示排除列表 
默认包含所有航班； 
不支持同时包含和排除
 **/
  QString flightInfo;

/**
 * @brief 政策销售日期最晚提前天数，默认-1表示无效
 **/
  qlonglong lastSaleAdvanceDay;

/**
 * @brief 代理商对政策的备注信息
 **/
  QString memo;

/**
 * @brief 政策设置为支持自动HK，自动出票时必需
 **/
  QString officeId;

/**
 * @brief 政策的外部id，用于关联代理商自身维护的政策id，提供外部产品id时，可以在查询和修改时作为唯一条件使用
 **/
  QString outProductId;

/**
 * @brief 0，type为0时，不需要设置； 
1，type为1时，表示policy_id为政策id 
2，type为2时，表示policy_id为政策out_product_id
 **/
  QString policyId;

/**
 * @brief 政策类型：6，特价政策；8，让利政策；10，特殊政策
 **/
  qlonglong policyType;

/**
 * @brief 退票规则
 **/
  QString refundRule;

/**
 * @brief 签转规则
 **/
  QString reissueRule;

/**
 * @brief 政策销售有效日期的截止日期(注意，格式如：20120-03-10 10:30:31 等价2012-03-11)
 **/
  QDateTime saleEndDate;

/**
 * @brief 政策销售有效日期的开始日期(注意，格式如：20120-03-10 10:30:31 等价2012-03-11)
 **/
  QDateTime saleStartDate;

/**
 * @brief 政策类型为10时，用于设置政策的每天的库存信息
 **/
  QString seatInfo;

/**
 * @brief 政策是否支持共享航班，默认为不支持；设置不支持情况下，当航班的实际承运方不是当前航空公司，则搜索结果页不能展现
 **/
  bool shareSupport;

/**
 * @brief 特殊说明
 **/
  QString specialRule;

/**
 * @brief 政策旅行有效日期的结束日期(注意，格式如：20120-03-10 10:30:31 等价2012-03-11)
 **/
  QDateTime travelEndDate;

/**
 * @brief 政策旅行有效日期的开始日期(注意，格式，如：2012-03-10 10:30:31 等价2012-03-10)
 **/
  QDateTime travelStartDate;

/**
 * @brief 0，表示添加政策； 
1，表示按id修改政策； 
2，表示按out_product_id修改政策
 **/
  qlonglong type;

};

#endif  /* JIPIAOPOLICYPROCESSREQUEST_H */
