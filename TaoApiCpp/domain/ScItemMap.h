#ifndef SCITEMMAP_H
#define SCITEMMAP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 后端商品映射关系对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScItemMap : public TaoDomain
{

public:
 virtual ~ScItemMap() { }

  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  qlonglong getMapType() const;
  void setMapType (qlonglong mapType);
  qlonglong getRelItemId() const;
  void setRelItemId (qlonglong relItemId);
  QString getRelOuterCode() const;
  void setRelOuterCode (QString relOuterCode);
  qlonglong getRelUserId() const;
  void setRelUserId (qlonglong relUserId);
  QString getRelUserNick() const;
  void setRelUserNick (QString relUserNick);
  qlonglong getSkuId() const;
  void setSkuId (qlonglong skuId);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getUserNick() const;
  void setUserNick (QString userNick);
  
  virtual void parseResponse();

private:
/**
 * @brief map_type=1时，item_id为IC商品id 
 
map_type=7时，item_id为分销商品id
 **/
  qlonglong itemId;

/**
 * @brief 1:前台和后台关系 
7:分销和后台关系
 **/
  qlonglong mapType;

/**
 * @brief 后端商品ID
 **/
  qlonglong relItemId;

/**
 * @brief 后端商品所有者商家编码
 **/
  QString relOuterCode;

/**
 * @brief 后端商品所有者id
 **/
  qlonglong relUserId;

/**
 * @brief 后端商品所有者名称
 **/
  QString relUserNick;

/**
 * @brief 当宝贝下没SKU时该字段为空
 **/
  qlonglong skuId;

/**
 * @brief Ic商家id(分销商id)
 **/
  qlonglong userId;

/**
 * @brief Ic商家nick(分销商nick)
 **/
  QString userNick;

};

#endif  /* SCITEMMAP_H */
