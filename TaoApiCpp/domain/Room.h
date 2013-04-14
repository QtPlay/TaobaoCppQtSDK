#ifndef ROOM_H
#define ROOM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>
#include <TaoApiCpp/domain/Hotel.h>
#include <TaoApiCpp/domain/RoomType.h>


/**
 * @brief Room（酒店商品）结构。各字段详细说明可参考接口定义，如：商品发布接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Room : public TaoDomain
{

public:
 virtual ~Room() { }

  QString getArea() const;
  void setArea (QString area);
  QString getBbn() const;
  void setBbn (QString bbn);
  QString getBedType() const;
  void setBedType (QString bedType);
  QString getBreakfast() const;
  void setBreakfast (QString breakfast);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getDeposit() const;
  void setDeposit (qlonglong deposit);
  QString getDesc() const;
  void setDesc (QString desc);
  qlonglong getFee() const;
  void setFee (qlonglong fee);
  qlonglong getGid() const;
  void setGid (qlonglong gid);
  QString getGuide() const;
  void setGuide (QString guide);
  qlonglong getHid() const;
  void setHid (qlonglong hid);
  Hotel getHotel() const;
  void setHotel (Hotel hotel);
  qlonglong getIid() const;
  void setIid (qlonglong iid);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getMultiRoomQuotas() const;
  void setMultiRoomQuotas (QString multiRoomQuotas);
  QString getPaymentType() const;
  void setPaymentType (QString paymentType);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  QString getPriceType() const;
  void setPriceType (QString priceType);
  qlonglong getRid() const;
  void setRid (qlonglong rid);
  QString getRoomQuotas() const;
  void setRoomQuotas (QString roomQuotas);
  RoomType getRoomType() const;
  void setRoomType (RoomType roomType);
  QString getService() const;
  void setService (QString service);
  QString getSize() const;
  void setSize (QString size);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  QString getStorey() const;
  void setStorey (QString storey);
  QString getTitle() const;
  void setTitle (QString title);
  
  virtual void parseResponse();

private:
/**
 * @brief 面积
 **/
  QString area;

/**
 * @brief 宽带服务
 **/
  QString bbn;

/**
 * @brief 床型
 **/
  QString bedType;

/**
 * @brief 早餐
 **/
  QString breakfast;

/**
 * @brief 创建时间
 **/
  QDateTime created;

/**
 * @brief 订金
 **/
  qlonglong deposit;

/**
 * @brief 商品描述
 **/
  QString desc;

/**
 * @brief 手续费
 **/
  qlonglong fee;

/**
 * @brief 酒店商品id
 **/
  qlonglong gid;

/**
 * @brief 购买须知
 **/
  QString guide;

/**
 * @brief 酒店id
 **/
  qlonglong hid;

/**
 * @brief 酒店信息
 **/
  Hotel hotel;

/**
 * @brief 淘宝商品id
 **/
  qlonglong iid;

/**
 * @brief 修改时间
 **/
  QDateTime modified;

/**
 * @brief 为到店支付卖家特殊使用，代表多种支付类型的房态
 **/
  QString multiRoomQuotas;

/**
 * @brief 支付类型
 **/
  QString paymentType;

/**
 * @brief 酒店商品图片Url。多个url用逗号隔开
 **/
  QString picUrl;

/**
 * @brief 价格类型
 **/
  QString priceType;

/**
 * @brief 房型id
 **/
  qlonglong rid;

/**
 * @brief 房态信息。JSON格式串
 **/
  QString roomQuotas;

/**
 * @brief 房型信息
 **/
  RoomType roomType;

/**
 * @brief 设施服务。JSON格式串
 **/
  QString service;

/**
 * @brief 床宽
 **/
  QString size;

/**
 * @brief 状态。1：上架。2：下架。3：删除
 **/
  qlonglong status;

/**
 * @brief 楼层
 **/
  QString storey;

/**
 * @brief 酒店商品名称
 **/
  QString title;

};

#endif  /* ROOM_H */
