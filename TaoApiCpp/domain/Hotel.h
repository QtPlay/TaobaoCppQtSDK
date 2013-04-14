#ifndef HOTEL_H
#define HOTEL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/RoomType.h>


/**
 * @brief Hotel（酒店）结构。各字段详细说明可参考接口定义，如：酒店发布接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Hotel : public TaoDomain
{

public:
 virtual ~Hotel() { }

  QString getAddress() const;
  void setAddress (QString address);
  QString getAliasName() const;
  void setAliasName (QString aliasName);
  QString getAuditDenyReason() const;
  void setAuditDenyReason (QString auditDenyReason);
  qlonglong getCity() const;
  void setCity (qlonglong city);
  QString getCityStr() const;
  void setCityStr (QString cityStr);
  QString getCountry() const;
  void setCountry (QString country);
  QString getCountryStr() const;
  void setCountryStr (QString countryStr);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getDecorateTime() const;
  void setDecorateTime (QString decorateTime);
  QString getDesc() const;
  void setDesc (QString desc);
  qlonglong getDistrict() const;
  void setDistrict (qlonglong district);
  QString getDistrictStr() const;
  void setDistrictStr (QString districtStr);
  qlonglong getHid() const;
  void setHid (qlonglong hid);
  QString getLevel() const;
  void setLevel (QString level);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getName() const;
  void setName (QString name);
  QString getOpeningTime() const;
  void setOpeningTime (QString openingTime);
  QString getOrientation() const;
  void setOrientation (QString orientation);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  qlonglong getProvince() const;
  void setProvince (qlonglong province);
  QString getProvinceStr() const;
  void setProvinceStr (QString provinceStr);
  QList<RoomType> getRoomTypes() const;
  void setRoomTypes (QList<RoomType> roomTypes);
  qlonglong getRooms() const;
  void setRooms (qlonglong rooms);
  QString getService() const;
  void setService (QString service);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  qlonglong getStoreys() const;
  void setStoreys (qlonglong storeys);
  QString getTel() const;
  void setTel (QString tel);
  
  virtual void parseResponse();

private:
/**
 * @brief 酒店地址
 **/
  QString address;

/**
 * @brief 某个卖家发布的酒店的别名(注：该字段将要废弃)
 **/
  QString aliasName;

/**
 * @brief 酒店审核被否决的原因
 **/
  QString auditDenyReason;

/**
 * @brief 城市编码
 **/
  qlonglong city;

/**
 * @brief 城市中文名称
 **/
  QString cityStr;

/**
 * @brief 国家编码
 **/
  QString country;

/**
 * @brief 国家中文名称
 **/
  QString countryStr;

/**
 * @brief 创建时间
 **/
  QDateTime created;

/**
 * @brief 装修时间
 **/
  QString decorateTime;

/**
 * @brief 酒店介绍
 **/
  QString desc;

/**
 * @brief 区域编码
 **/
  qlonglong district;

/**
 * @brief 区域中文名称
 **/
  QString districtStr;

/**
 * @brief 酒店id
 **/
  qlonglong hid;

/**
 * @brief 酒店级别
 **/
  QString level;

/**
 * @brief 修改时间
 **/
  QDateTime modified;

/**
 * @brief 酒店名称
 **/
  QString name;

/**
 * @brief 开业时间
 **/
  QString openingTime;

/**
 * @brief 酒店定位
 **/
  QString orientation;

/**
 * @brief 酒店图片url
 **/
  QString picUrl;

/**
 * @brief 省份编码
 **/
  qlonglong province;

/**
 * @brief 省份中文名称
 **/
  QString provinceStr;

/**
 * @brief 房型列表
 **/
  QList<RoomType> roomTypes;

/**
 * @brief 房间数
 **/
  qlonglong rooms;

/**
 * @brief 交通距离与设施服务。JSON格式串。
 **/
  QString service;

/**
 * @brief 状态。0：待审核，1：正常（审核通过），2：审核否决，3：停售
 **/
  qlonglong status;

/**
 * @brief 楼层数
 **/
  qlonglong storeys;

/**
 * @brief 酒店电话
 **/
  QString tel;

};

#endif  /* HOTEL_H */
