#ifndef HOTELADDREQUEST_H
#define HOTELADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelAddResponse.h>

/**
 * TOP API: 此接口用于新增一个酒店，酒店的发布者是当前会话的用户。 
该接口发出的是一个酒店申请，需要淘宝小二审核。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAddress() const
;  void setAddress (QString address);

 qlonglong getCity() const
;  void setCity (qlonglong city);

 QString getCountry() const
;  void setCountry (QString country);

 QString getDecorateTime() const
;  void setDecorateTime (QString decorateTime);

 QString getDesc() const
;  void setDesc (QString desc);

 qlonglong getDistrict() const
;  void setDistrict (qlonglong district);

 bool getDomestic() const
;  void setDomestic (bool domestic);

 QString getLevel() const
;  void setLevel (QString level);

 QString getName() const
;  void setName (QString name);

 QString getOpeningTime() const
;  void setOpeningTime (QString openingTime);

 QString getOrientation() const
;  void setOrientation (QString orientation);

 FileItem getPic() const
;  void setPic (FileItem pic);

 qlonglong getProvince() const
;  void setProvince (qlonglong province);

 qlonglong getRooms() const
;  void setRooms (qlonglong rooms);

 QString getService() const
;  void setService (QString service);

 QString getSiteParam() const
;  void setSiteParam (QString siteParam);

 qlonglong getStoreys() const
;  void setStoreys (qlonglong storeys);

 QString getTel() const
;  void setTel (QString tel);


  virtual HotelAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 酒店地址。长度不能超过120
 **/
  QString address;

/**
 * @brief 城市编码。参见：http://kezhan.trip.taobao.com/area.html，domestic为false时，输入对应国家的海外城市编码，可调用海外城市查询接口获取
 **/
  qlonglong city;

/**
 * @brief domestic为true时，固定China； 
domestic为false时，必须传定义的海外国家编码值。参见：http://kezhan.trip.taobao.com/countrys.html
 **/
  QString country;

/**
 * @brief 装修年份。长度不能超过4。
 **/
  QString decorateTime;

/**
 * @brief 酒店介绍。不超过25000个汉字
 **/
  QString desc;

/**
 * @brief 区域（县级市）编码。参见：http://kezhan.trip.taobao.com/area.html
 **/
  qlonglong district;

/**
 * @brief 是否国内酒店。可选值：true，false
 **/
  bool domestic;

/**
 * @brief 酒店级别。可选值：A,B,C,D,E,F。代表客栈公寓、经济连锁、二星级/以下、三星级/舒适、四星级/高档、五星级/豪华
 **/
  QString level;

/**
 * @brief 酒店名称。不能超过60
 **/
  QString name;

/**
 * @brief 开业年份。长度不能超过4。
 **/
  QString openingTime;

/**
 * @brief 酒店定位。可选值：T,B。代表旅游度假、商务出行
 **/
  QString orientation;

/**
 * @brief 酒店图片。最大长度:500K。支持的文件类型：gif,jpg,png
 **/
  FileItem pic;

/**
 * @brief 省份编码。参见：http://kezhan.trip.taobao.com/area.html，domestic为false时默认为0
 **/
  qlonglong province;

/**
 * @brief 房间数。长度不能超过4。
 **/
  qlonglong rooms;

/**
 * @brief 交通距离与设施服务。JSON格式。cityCenterDistance、railwayDistance、airportDistance分别代表距离市中心、距离火车站、距离机场公里数，为不超过3位正整数，默认-1代表无数据。 
其他key值true代表有此服务，false代表没有。 
parking：停车场，airportShuttle：机场接送，rentCar：租车，meetingRoom：会议室，businessCenter：商务中心，swimmingPool：游泳池，fitnessClub：健身中心，laundry：洗衣服务，morningCall：叫早服务，bankCard：接受银行卡，creditCard：接受信用卡，chineseRestaurant：中餐厅，westernRestaurant：西餐厅，cafe：咖啡厅，bar：酒吧，ktv：KTV。
 **/
  QString service;

/**
 * @brief 接入卖家数据主键
 **/
  QString siteParam;

/**
 * @brief 楼层数。长度不能超过4。
 **/
  qlonglong storeys;

/**
 * @brief 酒店电话。格式：国家代码（最长6位）#区号（最长4位）#电话（最长20位）。国家代码提示：中国大陆0086、香港00852、澳门00853、台湾00886
 **/
  QString tel;

};

#endif  /* HOTELADDREQUEST_H */
