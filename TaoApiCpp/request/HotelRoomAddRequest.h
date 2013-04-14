#ifndef HOTELROOMADDREQUEST_H
#define HOTELROOMADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelRoomAddResponse.h>

/**
 * TOP API: 此接口用于发布一个集市酒店商品，商品的发布者是当前会话的用户。如果该酒店、该房型、该用户所对应的商品在淘宝集市酒店系统中已经存在，则会返回错误提示。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getArea() const
;  void setArea (QString area);

 QString getBbn() const
;  void setBbn (QString bbn);

 QString getBedType() const
;  void setBedType (QString bedType);

 QString getBreakfast() const
;  void setBreakfast (QString breakfast);

 qlonglong getDeposit() const
;  void setDeposit (qlonglong deposit);

 QString getDesc() const
;  void setDesc (QString desc);

 qlonglong getFee() const
;  void setFee (qlonglong fee);

 QString getGuide() const
;  void setGuide (QString guide);

 bool getHasReceipt() const
;  void setHasReceipt (bool hasReceipt);

 qlonglong getHid() const
;  void setHid (qlonglong hid);

 QString getMultiRoomQuotas() const
;  void setMultiRoomQuotas (QString multiRoomQuotas);

 QString getPaymentType() const
;  void setPaymentType (QString paymentType);

 FileItem getPic() const
;  void setPic (FileItem pic);

 QString getPicPath() const
;  void setPicPath (QString picPath);

 QString getPriceType() const
;  void setPriceType (QString priceType);

 QString getReceiptInfo() const
;  void setReceiptInfo (QString receiptInfo);

 QString getReceiptOtherTypeDesc() const
;  void setReceiptOtherTypeDesc (QString receiptOtherTypeDesc);

 QString getReceiptType() const
;  void setReceiptType (QString receiptType);

 qlonglong getRid() const
;  void setRid (qlonglong rid);

 QString getRoomQuotas() const
;  void setRoomQuotas (QString roomQuotas);

 QString getService() const
;  void setService (QString service);

 QString getSiteParam() const
;  void setSiteParam (QString siteParam);

 QString getSize() const
;  void setSize (QString size);

 QString getStorey() const
;  void setStorey (QString storey);

 QString getTitle() const
;  void setTitle (QString title);


  virtual HotelRoomAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 面积。可选值：A,B,C,D。分别代表： 
A：15平米以下，B：16－30平米，C：31－50平米，D：50平米以上
 **/
  QString area;

/**
 * @brief 宽带服务。A,B,C,D。分别代表： 
A：无宽带，B：免费宽带，C：收费宽带，D：部分收费宽带
 **/
  QString bbn;

/**
 * @brief 床型。可选值：A,B,C,D,E,F,G,H,I。分别代表：A：单人床，B：大床，C：双床，D：双床/大床，E：子母床，F：上下床，G：圆形床，H：多床，I：其他床型
 **/
  QString bedType;

/**
 * @brief 早餐。A,B,C,D,E。分别代表： 
A：无早，B：单早，C：双早，D：三早，E：多早
 **/
  QString breakfast;

/**
 * @brief 订金。0～99999900的正整数。在payment_type为订金时必须输入，存储的单位是分。不能带角分。
 **/
  qlonglong deposit;

/**
 * @brief 商品描述。不能超过25000个汉字（50000个字符）。
 **/
  QString desc;

/**
 * @brief 手续费。0～99999900的正整数。在payment_type为手续费或手续费/间夜时必须输入，存储的单位是分。不能带角分。
 **/
  qlonglong fee;

/**
 * @brief 购买须知。不能超过4000个汉字（8000个字符）。
 **/
  QString guide;

/**
 * @brief 酒店商品是否提供发票
 **/
  bool hasReceipt;

/**
 * @brief 酒店id。必须为数字。
 **/
  qlonglong hid;

/**
 * @brief 为到店支付卖家特殊使用，代表多种支付类型的房态。room_quotas可选，如果有值，也会处理。
 **/
  QString multiRoomQuotas;

/**
 * @brief 支付类型。可选值：A,B,C,D,E。分别代表： 
A：全额支付，B：手续费，C：订金，D：手续费/间夜，E：前台面付
 **/
  QString paymentType;

/**
 * @brief 酒店商品图片。类型:JPG,GIF;最大长度:500K。支持的文件类型：gif,jpg,jpeg,png。发布的时候只能发布一张图片。如需再发图片，需要调用商品图片上传接口，1个商品最多5张图片。
 **/
  FileItem pic;

/**
 * @brief 商品主图需要关联的图片空间的相对url。这个url所对应的图片必须要属于当前用户。pic_path和image只需要传入一个,如果两个都传，默认选择pic_path
 **/
  QString picPath;

/**
 * @brief 价格类型。可选值：A,B。分别代表：A：参考预订价，B实时预订价 。未选该参数默认为参考预订价。选择实时预订价的情况下，支付类型必须选择为A(全额支付)
 **/
  QString priceType;

/**
 * @brief 发票说明，不能超过100个汉字,200个字符。
 **/
  QString receiptInfo;

/**
 * @brief 发票类型为其他时的发票描述,不能超过30个汉字，60个字符。
 **/
  QString receiptOtherTypeDesc;

/**
 * @brief 发票类型。A,B。分别代表： A:酒店住宿发票,B:其他
 **/
  QString receiptType;

/**
 * @brief 房型id。必须为数字。
 **/
  qlonglong rid;

/**
 * @brief 房态信息。可以传今天开始90天内的房态信息。日期必须连续。JSON格式传递。 
date：代表房态日期，格式为YYYY-MM-DD， 
price：代表当天房价，0～99999999，存储的单位是分， 
num：代表当天可售间数，0～999。 
如： 
[{"date":2011-01-28,"price":10000, "num":10},{"date":2011-01-29,"price":12000,"num":10}]
 **/
  QString roomQuotas;

/**
 * @brief 设施服务。JSON格式。 
value值true有此服务，false没有。 
bar：吧台，catv：有线电视，ddd：国内长途电话，idd：国际长途电话，toilet：独立卫生间，pubtoliet：公共卫生间。 
如： 
{"bar":false,"catv":false,"ddd":false,"idd":false,"pubtoilet":false,"toilet":false}
 **/
  QString service;

/**
 * @brief 接入卖家数据主键
 **/
  QString siteParam;

/**
 * @brief 床宽。可选值：A,B,C,D,E,F,G,H。分别代表：A：1米及以下，B：1.1米，C：1.2米，D：1.35米，E：1.5米，F：1.8米，G：2米，H：2.2米及以上
 **/
  QString size;

/**
 * @brief 楼层。长度不超过8
 **/
  QString storey;

/**
 * @brief 酒店商品名称。不能超过60字节
 **/
  QString title;

};

#endif  /* HOTELROOMADDREQUEST_H */
